//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBFolder.h>

@class SBHLibraryCategoryIdentifier;

@interface SBHLibraryCategoryFolder : SBFolder
{
    SBHLibraryCategoryIdentifier *_libraryCategoryIdentifier;
}

@property (readonly, nonatomic) SBHLibraryCategoryIdentifier *libraryCategoryIdentifier; // @synthesize libraryCategoryIdentifier=_libraryCategoryIdentifier;

- (void).cxx_destruct;
- (id)_indexPathToRevealForJiggleMode;
- (id)initWithDisplayName:(id)arg1 maxListCount:(unsigned long long)arg2 listGridSize:(struct SBHIconGridSize)arg3 libraryCategoryIdentifier:(id)arg4;
- (BOOL)isLibraryCategoryFolder;

@end

