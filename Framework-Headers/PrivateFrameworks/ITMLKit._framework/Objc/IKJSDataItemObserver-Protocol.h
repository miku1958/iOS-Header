//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class IKJSDataItem, NSString;

@protocol IKJSDataItemObserver <NSObject>

@optional
- (void)dataItem:(IKJSDataItem *)arg1 didChangePropertyPathWithString:(NSString *)arg2;
- (void)dataItem:(IKJSDataItem *)arg1 didChangeSubPropertyPathWithString:(NSString *)arg2 forPropertyPathWithString:(NSString *)arg3 subscriptIndex:(long long)arg4;
@end

