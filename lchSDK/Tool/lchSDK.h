
#ifdef DEBUG //处于开发阶段
#define NSLog(...) NSLog(@"%s %d\n %@\n\n", __func__, __LINE__, [NSString stringWithFormat:__VA_ARGS__])
#else //处于发布阶段
#define NSLog(...)
#endif

//导入的东西 BEGIN
#ifdef __OBJC__
//basic frame
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//category:NS
#import "NSArray+Log.h"
#import "NSArray+WT.h"
#import "NSDictionary+lch.h"
#import "NSDate+WT.h"
#import "NSString+WT.h"
#import "NSTimer+WT.h"


//category:UI
#import "CALayer+lch.h"
#import "UIBarButtonItem+HYBarButtonItem.h"
#import "UIBarButtonItem+WT.h"
#import "UIButton+lch.h"
#import "UIColor+Hex.h"
#import "UIImage+RenderMode.h"
#import "UIImage+WT.h"
#import "UILabel+lch.h"
#import "UITextView+WT.h"
#import "UIView+lch.h"




//tool
#import "WTUtility.h"
#import "Singleton.h"
#import "lchFileManager.h"





//View 

#endif
//导入的东西 END


//获取最上层的window
#define WTTopWindow [[UIApplication sharedApplication].windows lastObject]
//弱引用申明
#define lchWeakSelf __weak __typeof(self) weakSelf = self;

#define SFM(x) ([NSString stringWithFormat:@"%@", (x)])

#define WTAppDelegate ((AppDelegate *) [[UIApplication sharedApplication] delegate])
#define WTUserDefaults [NSUserDefaults standardUserDefaults]

//状态栏高度
#define WTStatusBarHeight 20
//NavBar高度
#define WTNavigationBarHeight 44
//状态栏 ＋ 导航栏 高度
#define WTStatus_And_Navigation_Height 64
//底部tab高度
#define WTTab_Bar_Height 49

//通知中心
#define WTNotificationCenter [NSNotificationCenter defaultCenter]

#define lchScreenWidth  CGRectGetWidth([UIScreen mainScreen].bounds)
#define lchScreenHeight CGRectGetHeight([UIScreen mainScreen].bounds)

#define PI 3.14159265358979323846

#define WTStrIsEmpty(str) ([str isKindOfClass:[NSNull class]] || [str length] < 1 ? YES : NO || [str isEqualToString:@"(null)"] || [str isEqualToString:@"null"])

//随机色
#define lchRandomColor [UIColor colorWithRed:arc4random_uniform(256) / 255.0 green:arc4random_uniform(256) / 255.0 blue:arc4random_uniform(256) / 255.0 alpha:1.0]

// RGB颜色
#define lchColor(r, g, b) [UIColor colorWithRed:(r) / 255.0 green:(g) / 255.0 blue:(b) / 255.0 alpha:1.0]

#define WTAlphaColor(r, g, b, a) [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a]

#define WTHexColor(X) [UIColor colorWithRed:((float) ((X & 0xFF0000) >> 16)) / 255.0 green:((float) ((X & 0xFF00) >> 8)) / 255.0 blue:((float) (X & 0xFF)) / 255.0 alpha:1.0]
#define WTHexColorA(X, A) [UIColor colorWithRed:((float) ((X & 0xFF0000) >> 16)) / 255.0 green:((float) ((X & 0xFF00) >> 8)) / 255.0 blue:((float) (X & 0xFF)) / 255.0 alpha:A]

// 是否为iOS9,获得系统版本
#define isIOS9 ([[UIDevice currentDevice].systemVersion doubleValue] >= 9.0)
// 是否为iOS8,获得系统版本
#define isIOS8 ([[UIDevice currentDevice].systemVersion doubleValue] >= 8.0)
// 是否为iOS7,获得系统版本
#define isIOS7 ([[UIDevice currentDevice].systemVersion doubleValue] >= 7.0)


#define iPhone4_Screen (WTDeviceHeight == 480 ? 1 : 0)
#define iPhone6_Screen (WTDeviceWidth == 375 ? 1 : 0)
#define iPhone6Plus_Screen (WTDeviceWidth == 414 ? 1 : 0)
