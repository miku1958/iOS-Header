//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSString;

@interface CLSActivityItem : CLSObject <CLSRelationable>
{
    NSString *_identifier;
    NSString *__title;
}

@property (copy, nonatomic) NSString *_title; // @synthesize _title=__title;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;

+ (id)relations;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (BOOL)validateObject:(id *)arg1;

@end
