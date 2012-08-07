// 
//  CalculatorBrain.h
//  Reverse Polish Notation Calculator
//
//  Created by Kevin Farst on 8/4/12.
//  Copyright (c) 2012 Kevin Farst. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
