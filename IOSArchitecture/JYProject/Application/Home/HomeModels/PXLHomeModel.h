//
//  PXLHomeModel.h
//  JYProject
//
//  Created by dayou on 2017/7/26.
//  Copyright © 2017年 dayou. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PXLDataListModel;

@interface PXLHomeModel : NSObject<YYModel>
/* 创建时间(已经弃用) */
@property (nonatomic ,strong)NSString *createTime;
/* 创建时间 */
@property (nonatomic ,strong)NSString * dateJianxie;
/* 帖子内容 */
@property (nonatomic ,strong)NSString *contentConvertTest;
/* 帖子内容(用上面那个)*/
@property (nonatomic ,strong)NSString *postContent;
/* 帖子id */
@property (nonatomic ,strong)NSString *postId;
/* 帖子图片 */
@property (nonatomic ,strong)NSArray *postImage;
/* 帖子状态 0 正常 1 封贴 */
@property (nonatomic ,strong)NSString *postStatus;
/* 帖子标题 */
@property (nonatomic ,strong)NSString *postTitle;
/* 发帖人id */
@property (nonatomic ,strong)NSString *publi_user;
/* 回复数 */
@property (nonatomic ,strong)NSString *replyNum;
/* 访问数 */
@property (nonatomic ,strong)NSString *visitNum;
/* 包含发帖人信息 */
@property (nonatomic ,strong)PXLDataListModel *dataListModel;

@end
