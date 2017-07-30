//
//  JY_HttpRequest.h
//  JYProject
//
//  Created by dayou on 2017/7/27.
//  Copyright © 2017年 dayou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JY_HttpRequestConfiguration.h"

@interface JY_HttpRequest : NSObject

/**
 * 数据请求
 *
 * @param URLString 数据接口
 * @param parameters 请求参数集合
 * @param method 请求方式 (get or post)
 * @param finishedBlock 请求完成回调
 */
+ (void)requestWithURLString: (NSString *)URLString
                  parameters: (NSDictionary *)parameters
                      method: (JYRequestMethodType)method
                    callBack: (ITFinishedBlock)finishedBlock;

/**
 * 数据上传
 *
 * @param URLString 数据接口
 * @param parameters 请求参数集合
 * @param method 请求方式 (get or post)
 * @param imageListBlack 要上传的图片
 * @param finishedBlock 请求完成回调
 */
+ (void)requestWithURLString: (NSString *)URLString
                  parameters: (NSDictionary *)parameters
              imageListBlack:(NetWorkUpload)imageListBlack
                    callBack: (ITFinishedBlock)finishedBlock;
/**
 * 数据下载
 *
 * @param URLString 数据接口
 * @param parameters 请求参数集合
 * @param method 请求方式 (get or post)
 * @param imageListBlack 要上传的图片
 * @param finishedBlock 请求完成回调
 */
/**
 * 取消所有数据请求
 */
+ (void)cancleAllRequest;

/**
 * 监听网络状态 (建议在程序进入前台时调用)
 */
+ (void)netWorkStateDetection:(NetWorkStateBlock)state;

/**
 * 关闭监听网络状态 (建议在程序将要进入后台时调用)
 */
+ (void)cancleNetWorkStateDetection;

@end