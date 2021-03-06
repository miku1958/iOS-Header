//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSString;

@protocol SKUIObjectInspector <NSObject>

@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *information;

- (void)beginSectionWithFriendlyName:(NSString *)arg1;
- (void)endSection;
- (void)exposePropertyWithFriendlyName:(NSString *)arg1 value:(id)arg2;
@end

