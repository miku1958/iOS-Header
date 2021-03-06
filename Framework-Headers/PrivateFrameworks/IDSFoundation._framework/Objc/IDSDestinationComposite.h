//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSDestination.h>

@class NSArray;

@interface IDSDestinationComposite : IDSDestination
{
    NSArray *_destinations;
}

@property (readonly, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinations:(id)arg1;

@end

