//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPProxyObject.h>

#import <Search/PRSAlignmentSchema-Protocol.h>

@class NSArray;
@protocol PRSMetaResult;

@interface SPAlignmentSchema : SPProxyObject <PRSAlignmentSchema>
{
}

@property (strong, nonatomic) NSArray *column_align; // @dynamic column_align;
@property (strong, nonatomic) NSArray *equal_width; // @dynamic equal_width;
@property (strong, nonatomic) id<PRSMetaResult> meta; // @dynamic meta;
@property (strong, nonatomic) NSArray *within_column_align; // @dynamic within_column_align;

@end

