//
//  JY_HttpRequestManager.h
//  JYProject
//
//  Created by dayou on 2017/8/3.
//  Copyright © 2017年 dayou. All rights reserved.
//

#import <Foundation/Foundation.h>

/*---------------------API回调-----------------------*/
@protocol JY_HttpRequestManagerCallBackDelegate <NSObject>
@required
- (void)managerCallAPIDidSuccess:(JY_HttpRequest *)request;
- (void)managerCallAPIDidFailed:(JY_HttpRequest *)request;
@end

@interface JY_HttpRequestManager : NSObject
/* 开启缓存 默认值NO */
@property (nonatomic ,assign)BOOL starCache;

/* 请求提示 (看枚举) */
@property (nonatomic ,assign)JYRequestShowType requestShowType;

/* 回调代理 */
@property (nonatomic ,weak)id<JY_HttpRequestManagerCallBackDelegate> delegate;

/**
 * 初始化方法
 *
 * @param view 加载HUDView提示框的父View
 */
+(instancetype)loadDataHUDwithView:(UIView*)view;

/**
 * 数据请求
 *
 * @param URLString      数据接口
 * @param method         请求方式 (通过JYRequestMethodType枚举判断请求类型)
 * @param parameters     请求参数集合
 * @param imageListBlack 要上传的文件 如果不是上传JYRequestMethodType请求 可以不传
 */
- (void)requestWithURLString: (NSString *)URLString
                      method: (JYRequestMethodType)method
                  parameters: (NSDictionary *)parameters
              imageListBlack:(NetWorkUpload)imageListBlack;

/**
 * 取消所有数据请求
 */
- (void)cancleAllRequest;

@end