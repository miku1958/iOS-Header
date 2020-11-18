//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface FASharedServiceGroup : NSObject
{
    NSString *_headerText;
    NSString *_footerText;
    NSNumber *_groupID;
    NSArray *_services;
}

@property (strong, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property (strong, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property (strong, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property (strong, nonatomic) NSArray *services; // @synthesize services=_services;

- (void).cxx_destruct;
- (id)description;
- (id)initWithServerResponse:(id)arg1;

@end
