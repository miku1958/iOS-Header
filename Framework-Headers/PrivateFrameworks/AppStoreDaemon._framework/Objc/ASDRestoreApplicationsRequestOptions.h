//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions
{
    BOOL _completeDataPromise;
    BOOL _createsPlaceholders;
    BOOL _restoreApplicationData;
    NSArray *_items;
}

@property (nonatomic) BOOL completeDataPromise; // @synthesize completeDataPromise=_completeDataPromise;
@property (nonatomic) BOOL createsPlaceholders; // @synthesize createsPlaceholders=_createsPlaceholders;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (nonatomic) BOOL restoreApplicationData; // @synthesize restoreApplicationData=_restoreApplicationData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplicationMetadata:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

