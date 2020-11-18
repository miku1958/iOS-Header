//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVObject.h>

@class NSString;

@interface PVPerson : PVObject
{
    BOOL _inPersonNamingModel;
    BOOL _verified;
    NSString *_name;
    NSString *_uri;
    long long _faceCount;
    long long _manualOrder;
    long long _type;
}

@property (nonatomic) long long faceCount; // @synthesize faceCount=_faceCount;
@property (nonatomic) BOOL inPersonNamingModel; // @synthesize inPersonNamingModel=_inPersonNamingModel;
@property (nonatomic) long long manualOrder; // @synthesize manualOrder=_manualOrder;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property (nonatomic) BOOL verified; // @synthesize verified=_verified;

- (void).cxx_destruct;
- (void)_setPropertiesFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)initWithPerson:(id)arg1;

@end

