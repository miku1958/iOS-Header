//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UpdateAndReportServices : NSObject
{
    BOOL _update;
    BOOL _report;
    CDUnknownBlockType _block;
}

@property (copy) CDUnknownBlockType block; // @synthesize block=_block;
@property (readonly) BOOL report; // @synthesize report=_report;
@property (readonly) BOOL update; // @synthesize update=_update;

- (void)dealloc;
- (id)initWithServices:(BOOL)arg1 needToReport:(BOOL)arg2 service:(CDUnknownBlockType)arg3;

@end

