//
//  YQSelectPayStyleView.h
//  Youqun
//
//  Created by 王崇磊 on 16/6/1.
//  Copyright © 2016年 W_C__L. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, YQPayStyle) {
    YQPayWechatStyle,  //微信支付
    YQPayChangeStyle,  //零钱支付
};

@interface YQSelectPayStyleView : UIView

+ (instancetype)initFromNibPayStyleBlock:(void(^)(YQPayStyle))block;

@end
