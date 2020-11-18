//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolRuntimeTypeSet;

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject
{
}

@property (nonatomic) BOOL isTruncated;
@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSString *leastCommonAncestor;
@property (copy, nonatomic) NSArray *structures;
@property (strong, nonatomic) RWIProtocolRuntimeTypeSet *typeSet;

- (id)initWithIsValid:(BOOL)arg1;

@end
