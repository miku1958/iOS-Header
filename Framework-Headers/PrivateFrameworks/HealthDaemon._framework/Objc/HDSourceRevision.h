//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSourceEntity, NSString;

@interface HDSourceRevision : NSObject
{
    HDSourceEntity *_sourceEntity;
    NSString *_version;
    NSString *_productType;
    CDStruct_f6aba300 _operatingSystemVersion;
}

@property (readonly, nonatomic) CDStruct_2ec95fd7 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property (readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property (readonly, nonatomic) HDSourceEntity *sourceEntity; // @synthesize sourceEntity=_sourceEntity;
@property (readonly, nonatomic) NSString *version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(CDStruct_2ec95fd7)arg4;

@end
