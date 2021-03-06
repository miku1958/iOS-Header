//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CKObjCClass : NSObject
{
    Class _handle;
    NSString *_name;
    NSDictionary *_propertiesByName;
    NSArray *_sortedProperties;
}

@property (readonly, nonatomic) Class handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSDictionary *propertiesByName; // @synthesize propertiesByName=_propertiesByName;
@property (readonly, nonatomic) NSArray *sortedProperties; // @synthesize sortedProperties=_sortedProperties;

+ (id)classForHandle:(Class)arg1;
+ (id)classForObject:(id)arg1;
- (void).cxx_destruct;
- (id)allProperties;
- (id)initWithHandle:(Class)arg1;
- (id)propertyForName:(id)arg1;

@end

