//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject
{
    NSDate *_date;
    NSNumber *_numberDingsLeft;
}

@property (readonly, nonatomic) BOOL areDingsRemaining;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) NSNumber *numberDingsLeft; // @synthesize numberDingsLeft=_numberDingsLeft;

- (void)dealloc;
- (id)initWithDate:(id)arg1;
- (void)reduceNumberDingsLeft;

@end
