//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MPUContentItemIdentifierCollection;

@interface MusicLibraryActionKeepLocalOperation : NSOperation
{
    MPUContentItemIdentifierCollection *_contentItemIdentifierCollection;
    long long _keepLocalValue;
}

@property (readonly, copy) MPUContentItemIdentifierCollection *contentItemIdentifierCollection; // @synthesize contentItemIdentifierCollection=_contentItemIdentifierCollection;
@property (readonly) long long keepLocalValue; // @synthesize keepLocalValue=_keepLocalValue;

- (void).cxx_destruct;
- (id)initWithContentItemIdentifierCollection:(id)arg1 keepLocalValue:(long long)arg2;
- (void)main;

@end
