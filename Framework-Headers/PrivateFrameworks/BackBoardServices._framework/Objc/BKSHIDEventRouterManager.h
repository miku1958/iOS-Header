//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase
{
    BOOL _needsFlush;
}

@property (nonatomic) BOOL needsFlush; // @synthesize needsFlush=_needsFlush;

+ (id)sharedInstance;
- (void)_flush;
- (void)_flushTrigger;
- (void)_routerUpdated:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setEventRouters:(id)arg1;

@end
