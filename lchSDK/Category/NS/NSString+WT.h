//
//  NSString+WT.h
//  lchSDK
//
//  Created by lch on 16/1/12.
//  Copyright © 2015年 lch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (WT)
// 😀😉😌😰😂 Emoji start
/**
 *  将十六进制的编码转为emoji字符
 */
+ (NSString *)emojiWithIntCode:(int)intCode;

/**
 *  将十六进制的编码转为emoji字符
 */
+ (NSString *)emojiWithStringCode:(NSString *)stringCode;
- (NSString *)emoji;

/**
 *  是否为emoji字符
 */
- (BOOL)isEmoji;
/** 去掉 表情符号 可能漏了一些 */
- (NSString *)disableEmoji;
// 😀😉😌😰😂 Emoji end

@property (nonatomic, copy, readonly) NSString *delBlank; /**< 去空格 stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]]; */
@property (nonatomic, copy, readonly) NSString *delSpace; /**< 去空格 stringByReplacingOccurrencesOfString:@" " withString:@"" */

@property (nonatomic, strong, readonly) NSDictionary *jsonDic; /**<  解 为字典 if 有 */
@property (nonatomic, strong, readonly) NSArray *jsonArr;      /**< 解 为数组 if 有 */

//@property (nonatomic, strong, readonly) NSArray *combinArr; /**< 按字符串的，逗号分割为数组 */

#pragma mark - function😂

- (CGFloat)__H__:(NSInteger)font W:(CGFloat)W; /**< 适合的高度 默认 font 宽 */
- (CGFloat)__W__:(NSInteger)font H:(CGFloat)H; /**< 适合的高度 默认 font 高 */

- (BOOL)containStr:(NSString *)subString; /**< 是否包含对应字符 */
- (NSString *)addStr:(NSString *)string;  /**< 拼上字符串 */
- (NSString *)addInt:(int)string;         /**< 拼上int字符串 */




- (int)textLength;                               /**< 计算字符串长度 1个中文算2 个字符 */
- (NSString *)limitMaxTextShow:(NSInteger)limit; /**< 限制的最大显示长度字符 */

/** 是否是纯浮点数  这里也可以拆分成纯数字判断*/
- (BOOL)isFloat;

/** 根据字体大小与最大宽度 返回对应的size*/
- (CGSize)sizeWithFont:(UIFont *)font maxW:(CGFloat)maxW;

/** 根据字体大小 返回对应的size*/
- (CGSize)sizeWithFont:(UIFont *)font;




- (NSDate *) date;          /**<  长时间戳对应的NSDate */
- (NSDate *) date__YMd;     /**< YYYY-MM-dd 对应的NSDate */
- (NSDate *) date__YMd_Dot; /**< YYYY.MM.dd 对应的NSDate */
- (NSDate *) date__YMdHMS;  /**< YYYY-MM-dd HH:mm:ss对应的NSDate */

/******************/

- (NSData *)data;           /**< 转为 Data */
- (NSData *)base64Data;     /**< 转为 base64string后的Data */
- (NSString *)base64String; /**< 转为 base64String */
- (NSString *)decodeBase64;  /**< 解 base64str 为 String 解不了就返回原始的数值 */

- (NSString *)MD5Strig;     /**< 32位MD5加密 */
- (NSString *)SHA1Strig;    /**< SHA1加密 */

- (NSArray *)combinArr;     /**< 按字符串的，逗号分割为数组 */
- (UIImage *)qrCode;        /**< 二维码图片 可以 再用resize>>放大一下 */


- (BOOL)validateEmail;      /**< 验证邮箱是否合法 */
- (BOOL)checkPhoneNumInput; /**< 验证手机号码合法性 */
- (BOOL)isASCII;            /**< 是否ASCII码 */
- (BOOL)isSpecialCharacter; /**< 是含本方法定义的 “特殊字符” */
- (BOOL)isNumber;

- (BOOL)isPureChinese;      /** 是否全都是中文 */

- (BOOL)isPureNumber;       /** 验证字符串里面是否都是数字*/

+ (NSString *)UUID;         /** 获取UUID */

+ (NSString *)randomStringWithABC;/**返回随机大写字母*/

@end
