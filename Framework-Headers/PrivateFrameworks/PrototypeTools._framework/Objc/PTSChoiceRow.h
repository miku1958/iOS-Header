//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@class NSArray;

@interface PTSChoiceRow : PTSRow
{
    NSArray *_possibleValues;
    NSArray *_possibleTitles;
    NSArray *_possibleShortTitles;
}

@property (copy, nonatomic) NSArray *possibleShortTitles; // @synthesize possibleShortTitles=_possibleShortTitles;
@property (copy, nonatomic) NSArray *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
@property (copy, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;

- (void).cxx_destruct;
- (id)init;
- (id)possibleShortTitles:(id)arg1;
- (id)possibleValues:(id)arg1 titles:(id)arg2;
- (Class)rowTableViewCellClass;
- (void)updateWithRow:(id)arg1;

@end

