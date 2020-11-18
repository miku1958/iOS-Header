//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMNode.h>

@class WebArchive;

@interface DOMNode (WebDOMNodeOperations)

@property (readonly, nonatomic) WebArchive *webArchive;

- (void)hidePlaceholder;
- (BOOL)isHorizontalWritingMode;
- (void)showPlaceholderIfNecessary;
- (id)webArchiveByFilteringSubframes:(CDUnknownBlockType)arg1;
@end

