//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SearchUITableLayoutInfo : NSObject
{
    NSArray *_columnWidths;
    NSArray *_columnSpacing;
    long long _firstTrailingIndex;
    NSArray *_columnAlignments;
}

@property (strong) NSArray *columnAlignments; // @synthesize columnAlignments=_columnAlignments;
@property (strong) NSArray *columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property (strong) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property long long firstTrailingIndex; // @synthesize firstTrailingIndex=_firstTrailingIndex;

- (void).cxx_destruct;

@end

