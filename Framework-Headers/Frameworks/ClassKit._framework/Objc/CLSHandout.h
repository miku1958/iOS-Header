//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class CLSClass, NSArray, NSDate, NSError, NSString;

@interface CLSHandout : CLSObject <CLSRelationable>
{
    BOOL __reviewed;
    NSDate *_dateOfPublication;
    NSDate *_dateLastReviewed;
    long long _state;
    long long _publishingState;
    NSError *_publishError;
    NSString *__title;
    NSString *__instructions;
    NSDate *__dueDate;
}

@property (strong, nonatomic) NSDate *_dueDate; // @synthesize _dueDate=__dueDate;
@property (copy, nonatomic) NSString *_instructions; // @synthesize _instructions=__instructions;
@property (nonatomic) BOOL _reviewed; // @synthesize _reviewed=__reviewed;
@property (copy, nonatomic) NSString *_title; // @synthesize _title=__title;
@property (readonly, nonatomic) NSArray *attachments;
@property (strong, nonatomic) NSDate *dateLastReviewed; // @synthesize dateLastReviewed=_dateLastReviewed;
@property (strong, nonatomic) NSDate *dateOfPublication; // @synthesize dateOfPublication=_dateOfPublication;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDate *dueDate;
@property (readonly, nonatomic) CLSClass *effectiveClass;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *instructions;
@property (strong, nonatomic) NSError *publishError; // @synthesize publishError=_publishError;
@property (nonatomic) long long publishingState; // @synthesize publishingState=_publishingState;
@property (readonly, nonatomic) NSArray *recipients;
@property (nonatomic, getter=isReviewed) BOOL reviewed;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;

+ (id)relations;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)addHandoutAttachment:(id)arg1;
- (void)addHandoutRecipient:(id)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (void)removeHandoutAttachment:(id)arg1;
- (void)removeHandoutRecipient:(id)arg1;
- (BOOL)validateObject:(id *)arg1;

@end

