//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSSection-Protocol.h>

@class NSArray, NSString;
@protocol PRSAlignmentSchema;

@protocol PRSTableRowSection <PRSSection>

@property (strong, nonatomic) id<PRSAlignmentSchema> alignment_schema;
@property (nonatomic) long long row_type;
@property (strong, nonatomic) NSString *tab_group_id;
@property (strong, nonatomic) NSString *table_id;
@property (strong, nonatomic) NSArray *value;


@optional
@end
