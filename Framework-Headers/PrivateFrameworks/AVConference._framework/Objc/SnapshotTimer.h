//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SnapshotTimer : NSObject
{
    BOOL taskIsComplete;
}

@property (nonatomic) BOOL taskIsComplete; // @synthesize taskIsComplete;

+ (void)takeSnapshotForTask:(id)arg1;
- (void)checkinWithTimeout:(double)arg1 forTask:(id)arg2;
- (void)checkout;
- (id)init;

@end

