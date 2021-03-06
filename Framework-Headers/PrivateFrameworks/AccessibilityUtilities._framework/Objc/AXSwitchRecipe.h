//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface AXSwitchRecipe : NSObject
{
    NSString *_name;
    NSUUID *_uuid;
    NSArray *_mappings;
    double _timeout;
    NSString *_unlocalizedName;
    NSString *_menuIconIdentifier;
}

@property (strong, nonatomic) NSArray *mappings; // @synthesize mappings=_mappings;
@property (copy, nonatomic) NSString *menuIconIdentifier; // @synthesize menuIconIdentifier=_menuIconIdentifier;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL shouldContinueScanning;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;
@property (strong, nonatomic) NSString *unlocalizedName; // @synthesize unlocalizedName=_unlocalizedName;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)recipeWithDictionaryRepresentation:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;

@end

