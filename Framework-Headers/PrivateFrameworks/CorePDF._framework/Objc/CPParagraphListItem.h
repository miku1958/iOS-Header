//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPList;

__attribute__((visibility("hidden")))
@interface CPParagraphListItem : NSObject <CPDisposable>
{
    CPList *list;
    int number;
    struct __CFArray *paragraphs;
}

@property (strong, nonatomic) CPList *list; // @synthesize list;
@property (nonatomic) int number; // @synthesize number;

- (void)addParagraph:(id)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)init;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (unsigned int)paragraphCount;

@end

