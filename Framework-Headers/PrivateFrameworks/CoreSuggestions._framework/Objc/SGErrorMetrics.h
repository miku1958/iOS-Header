//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMBadInteractionIgnored;

@interface SGErrorMetrics : NSObject
{
    SGMBadInteractionIgnored *_badInteractionIgnored;
}

@property (strong, nonatomic) SGMBadInteractionIgnored *badInteractionIgnored; // @synthesize badInteractionIgnored=_badInteractionIgnored;

+ (id)instance;
+ (void)recordInteractionIgnoredWithReason:(struct SGMInteractionIgnoredReason_)arg1;
- (void).cxx_destruct;
- (id)init;

@end

