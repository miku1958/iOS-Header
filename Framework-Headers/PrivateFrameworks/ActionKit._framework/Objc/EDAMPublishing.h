//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPublishing : FATObject
{
    NSString *_uri;
    NSNumber *_order;
    NSNumber *_ascending;
    NSString *_publicDescription;
}

@property (strong, nonatomic) NSNumber *ascending; // @synthesize ascending=_ascending;
@property (strong, nonatomic) NSNumber *order; // @synthesize order=_order;
@property (strong, nonatomic) NSString *publicDescription; // @synthesize publicDescription=_publicDescription;
@property (strong, nonatomic) NSString *uri; // @synthesize uri=_uri;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
