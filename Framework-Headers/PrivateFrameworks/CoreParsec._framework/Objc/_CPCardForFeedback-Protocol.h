//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPCardSectionForFeedback;

@protocol _CPCardForFeedback <NSObject>

@property (copy, nonatomic) NSArray *cardSections;
@property (copy, nonatomic) NSString *fbr;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addCardSections:(_CPCardSectionForFeedback *)arg1;
- (_CPCardSectionForFeedback *)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

