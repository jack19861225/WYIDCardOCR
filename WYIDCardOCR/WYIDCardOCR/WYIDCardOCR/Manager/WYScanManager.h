//
//  WYScanManager.h
//  WYIDCardOCR
//
//  Created by 汪年成 on 17/7/6.
//  Copyright © 2017年 之静之初. All rights reserved.
//

#import "WYScanManagerControl.h"

@interface WYScanManager : WYScanManagerControl

/** 银行卡正面 */
- (BOOL)configBankScanManager;


/** 身份证正面 */
- (BOOL)configIDScanManager;


/** 身份证反面 */
- (BOOL)configIDDownScanManager;


@end
