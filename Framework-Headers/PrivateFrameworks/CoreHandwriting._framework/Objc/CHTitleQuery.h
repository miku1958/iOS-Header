//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHQuery.h>

@class NSSet, NSString;

@interface CHTitleQuery : CHQuery
{
    NSString *_transcribedTitle;
    NSSet *_titleStrokeIdentifiers;
}

@property (readonly, copy, nonatomic) NSSet *titleStrokeIdentifiers; // @synthesize titleStrokeIdentifiers=_titleStrokeIdentifiers;
@property (readonly, copy, nonatomic) NSString *transcribedTitle; // @synthesize transcribedTitle=_transcribedTitle;

- (void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2;
- (void)dealloc;
- (id)debugName;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;

@end

