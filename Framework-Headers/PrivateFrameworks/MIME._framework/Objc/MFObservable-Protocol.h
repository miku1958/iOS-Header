//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/NSObject-Protocol.h>

@protocol MFCancelable, MFObserver;

@protocol MFObservable <NSObject>
- (id<MFCancelable>)subscribe:(id<MFObserver>)arg1;
@end

