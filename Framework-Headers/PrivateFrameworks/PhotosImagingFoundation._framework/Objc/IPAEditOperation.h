//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>
#import <PhotosImagingFoundation/NSObject-Protocol.h>

@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <NSObject, NSCopying>
{
    NSUUID *_UUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)presetifyAdjustment:(id)arg1;
- (void).cxx_destruct;
- (id)UUID;
- (id)archivalRepresentation;
- (id)autoIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)identifier;
- (id)init;
- (id)initWithOperation:(id)arg1;
- (id)initWithSettingsDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOperation:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)settingsDictionary;

@end

