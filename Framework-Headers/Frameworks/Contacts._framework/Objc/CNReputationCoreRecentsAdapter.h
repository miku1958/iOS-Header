//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRRecentContactsLibrary;

__attribute__((visibility("hidden")))
@interface CNReputationCoreRecentsAdapter : NSObject
{
    CRRecentContactsLibrary *_library;
}

@property (readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRecentContactsLibrary:(id)arg1;
- (id)recentContactsForHandle:(id)arg1;

@end

