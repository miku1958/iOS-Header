//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPModelLibrarySearchScope;

@interface MPModelLibrarySearchEntityResultContainer : NSObject
{
    MPModelLibrarySearchScope *_scope;
    shared_ptr_274c5e8b _entityQueryResult;
}

@property (readonly, nonatomic) shared_ptr_274c5e8b entityQueryResult; // @synthesize entityQueryResult=_entityQueryResult;
@property (readonly, copy, nonatomic) MPModelLibrarySearchScope *scope; // @synthesize scope=_scope;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntityQueryResult:(shared_ptr_274c5e8b)arg1 forScope:(id)arg2;

@end

