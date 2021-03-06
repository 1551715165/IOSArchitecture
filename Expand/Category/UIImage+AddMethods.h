//
//  UIImage+AddMethods.h
//  JYProject
//
//  Created by dayou on 2017/7/26.
//  Copyright © 2017年 dayou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (AddMethods)

/**
 绘制纯色的图片
 
 @param color 图片的颜色
 @param rect 图片的大小
 @param radius 圆角大小
 @return 返回绘制完的图片
 */
+(UIImage*)jy_createImageWithColor:(UIColor *)color frame:(CGRect)rect Radius:(CGFloat)radius;

/**
 * 设置图片的大小
 *
 * @param image 原图片,size 希望得到的图片的尺寸
 *
 * @return 返回尺寸改变过的图片
 */
+(UIImage*)jy_imageCompressWithSimple:(UIImage*)image scaledToSize:(CGSize)size;

@end
