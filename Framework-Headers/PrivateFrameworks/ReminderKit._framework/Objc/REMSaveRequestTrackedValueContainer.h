//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol REMSaveRequestTrackedValue;

@interface REMSaveRequestTrackedValueContainer : NSObject
{
    id<REMSaveRequestTrackedValue> _weakValue;
    id<REMSaveRequestTrackedValue> _template;
}

@property (strong, nonatomic) id<REMSaveRequestTrackedValue> template; // @synthesize template=_template;
@property (weak, nonatomic) id<REMSaveRequestTrackedValue> weakValue; // @synthesize weakValue=_weakValue;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1;
- (id)valueForSaveRequest:(id)arg1;
- (id)valueWithoutPerformingCopy;

@end
