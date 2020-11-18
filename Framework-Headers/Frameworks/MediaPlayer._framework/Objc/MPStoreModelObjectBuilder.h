//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject
{
    MPPropertySet *_requestedPropertySet;
}

@property (readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;

+ (id)allSupportedProperties;
- (void).cxx_destruct;
- (id)initWithRequestedPropertySet:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;
- (id)modelObjectWithStorePlatformDictionary:(id)arg1;

@end
