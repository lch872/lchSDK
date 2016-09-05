//
//  ViewController.m
//  mySDK
//
//  Created by lch on 16/9/4.
//  Copyright © 2016年 lch. All rights reserved.
//

#import "ViewController.h"
#import "lchSDK.h"

#import "WTUtility.h"
#import "NSString+WT.h"
#import "NSDictionary+lch.h"


@interface ViewController ()
@property (nonatomic,weak) UILabel *myview;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    UILabel *view = [[UILabel alloc] initWithFrame:CGRectMake(50,50, 100, 100)];
    view.backgroundColor = [UIColor greenColor];
    self.myview = view;
    [self.myview underlineStr:@"好吧吧试试时时"];
    [self.view addSubview:view];

    NSDictionary *dict = @{@"123":@"一二三",@"456":@"四五六"};
    NSString *str = @"123,456,789,963,852,44";
    
//    NSArray *aay = [str combinArr];
//    if ([str isPureNumber]) {
//        NSLog(@"是纯数字 ");
//    }
    
    NSLog(@"5   %@ ",[@"123" MD5Strig]);
    NSLog(@"a   %@ ",[@"123" SHA1Strig]);
    


}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    NSLog(@" %ld ",[WTUtility canUseCamera]);
}


@end
