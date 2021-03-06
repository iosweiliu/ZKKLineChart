//
//  MCStockTitleView.h
//  ZKKLineDemo
//
//  Created by ZK on 2017/8/25.
//  Copyright © 2017年 ZhouKang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCStockTitleView : UIView

+ (instancetype)titleView;

- (void)updateWithHigh:(CGFloat)high open:(CGFloat)open close:(CGFloat)close low:(CGFloat)low;
- (void)updateWithVolume:(CGFloat)volume MA5:(CGFloat)MA5 MA10:(CGFloat)MA10;
- (void)updateWithMACD:(CGFloat)MACD DIF:(CGFloat)DIF DEA:(CGFloat)DEA;
- (void)updateKDJWithK:(CGFloat)K D:(CGFloat)D J:(CGFloat)J;
- (void)updateRSIWithRSI6:(CGFloat)RSI6 RSI12:(CGFloat)RSI12 RSI24:(CGFloat)RSI24;

@end
