//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMTag : FATObject
{
    NSString *_guid;
    NSString *_name;
    NSString *_parentGuid;
    NSNumber *_updateSequenceNum;
}

@property (strong, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *parentGuid; // @synthesize parentGuid=_parentGuid;
@property (strong, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
