//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICRDExpansionStateContextProviding-Protocol.h>
#import <NotesUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ICRDSectionIdentifier <NSObject, ICRDExpansionStateContextProviding>

@property (readonly, nonatomic) NSString *title;

+ (NSArray *)sortDescriptors;
@end
