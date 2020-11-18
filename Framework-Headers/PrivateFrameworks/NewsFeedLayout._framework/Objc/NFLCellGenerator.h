//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLAbstractCellPropertyProvider, NFLAbstractCellSizer, NFLAbstractRanker;

@interface NFLCellGenerator : NSObject
{
    Class _headlineTemplateClass;
    NFLAbstractRanker *_ranker;
    NFLAbstractCellSizer *_sizer;
    NFLAbstractCellPropertyProvider *_propertyProvider;
}

@property (nonatomic) Class headlineTemplateClass; // @synthesize headlineTemplateClass=_headlineTemplateClass;
@property (readonly, nonatomic) NFLAbstractCellPropertyProvider *propertyProvider; // @synthesize propertyProvider=_propertyProvider;
@property (readonly, nonatomic) NFLAbstractRanker *ranker; // @synthesize ranker=_ranker;
@property (readonly, nonatomic) NFLAbstractCellSizer *sizer; // @synthesize sizer=_sizer;

- (void).cxx_destruct;
- (id)initWithSizer:(id)arg1 ranker:(id)arg2 propertyProvider:(id)arg3;
- (id)rankedLayoutsForTileInfo:(id)arg1 feedTemplate:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(BOOL)arg4;

@end
