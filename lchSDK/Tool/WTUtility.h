//
//  WTUtility.h
//  lchSDK
//
//  Created by lch on 15/11/14.
//  Copyright © 2015年 lch. All rights reserved.
//

//#import "lchConst.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface WTUtility : NSObject

/** 计算两个经纬的距离 */
+ (double)calculateDistanceWithLatitude:(NSString *)latitudeOne andLongitude:(NSString *)longitudeOne twoDistanceWithLatitude:(NSString *)latitudeTwo andLongitude:(NSString *)longitudeTwo;



+ (void)saveUserInfoDic:(NSMutableDictionary *)dic;

+ (void)saveLastUserName:(NSString *)userName password:(NSString *)password;

+ (NSDictionary *)getUserNameAndPasswordInfoDic;

+ (void)removeUserInfoDic;

+ (void)removeUserNameAndPasswordInfoDic;

+ (NSMutableDictionary *)getUserInfoDic;





+ (BOOL)isASCII:(NSString *)character;

+ (BOOL)isSpecialCharacter:(NSString *)character;

//纯颜色图片
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

/**
 *  代码执行时间0为很多次
 */
void code_RunTime(int times, void (^block)(void));

/**
 *  延迟执行
 */
void after_Run(float time, void (^block)(void));

/**
 *   是否连接到网络
 */
+ (BOOL)connectedToNetwork;

/**
 *   分割 钱字符串
 */
+ (NSMutableString *)sepearteMoneyByString:(NSMutableString *)money;

/**
 *  按钮点击事件
 */
+ (void)btnSuddenlyTouch:(UIButton *)senderBtn;

/**
 *  能否使用相机 不能用就alertview提示下
 */
+ (BOOL)canUseCamera;

@end
