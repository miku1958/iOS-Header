//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADTableStyleResolver.h>

@class OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTableUnnecessaryOverrideRemover : OADTableStyleResolver
{
    OADTextListStyle *_parentTextListStyle;
}

@property (readonly, nonatomic) OADTextListStyle *parentTextListStyle; // @synthesize parentTextListStyle=_parentTextListStyle;

- (void).cxx_destruct;
- (void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6;
- (void)applyTextBodyPropertiesToCellPropertiesInCell:(id)arg1;
- (void)applyTextStyle:(id)arg1 toParagraph:(id)arg2;
- (void)fixFill:(id)arg1;
- (id)initWithTable:(id)arg1 parentTextListStyle:(id)arg2;
- (void)removeUnnecessaryOverridesInCellProperties:(id)arg1 strokeType:(int)arg2 resolvedStroke:(id)arg3;

@end
