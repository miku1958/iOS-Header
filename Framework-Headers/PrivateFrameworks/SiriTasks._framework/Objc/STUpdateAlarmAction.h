//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriTasks/STAlarmAction.h>

@class NSArray;

@interface STUpdateAlarmAction : STAlarmAction
{
    NSArray *_modifications;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithModifications:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modifications;

@end

