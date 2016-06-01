//
//  ArrHelper.h
//  IXQ
//
//  Created by roycms on 16/6/1.
//  Copyright © 2016年 北京三芳科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ArrHelper : NSObject
/**
 *  arr 排序
 *
 *  @param arry        arry description
 *  @param key         key description
 *  @param isAscending isAscending description
 *
 *  @return return value description
 */
+(NSMutableArray*)arraySort:(NSMutableArray *)arry key:(NSString *)key isAscending:(BOOL)isAscending;

@end
