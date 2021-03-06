//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIImage.h>

@class NSArray, NSString;
@protocol CNCancelable;

@interface SearchUIAvatarImage : SearchUIImage
{
    NSArray *_contactIdentifiers;
    NSString *_letters;
    id<CNCancelable> _renderingToken;
}

@property (copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property (strong, nonatomic) NSString *letters; // @synthesize letters=_letters;
@property (strong, nonatomic) id<CNCancelable> renderingToken; // @synthesize renderingToken=_renderingToken;

+ (id)avatarImageRenderer;
- (void).cxx_destruct;
- (int)defaultCornerRoundingStyle;
- (unsigned long long)hash;
- (id)initWithContactImage:(id)arg1;
- (id)initWithMonogramImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDefaultSizeIfNecessary;

@end

