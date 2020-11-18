//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMCSSRule, NSString;

@interface DOMCSSStyleDeclaration : DOMObject
{
}

@property (copy) NSString *cssText;
@property (readonly) unsigned int length;
@property (readonly) DOMCSSRule *parentRule;

- (id)_fontSizeDelta;
- (void)_setFontSizeDelta:(id)arg1;
- (id)azimuth;
- (id)background;
- (id)backgroundAttachment;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)backgroundPosition;
- (id)backgroundRepeat;
- (id)border;
- (id)borderBottom;
- (id)borderBottomColor;
- (id)borderBottomStyle;
- (id)borderBottomWidth;
- (id)borderCollapse;
- (id)borderColor;
- (id)borderLeft;
- (id)borderLeftColor;
- (id)borderLeftStyle;
- (id)borderLeftWidth;
- (id)borderRight;
- (id)borderRightColor;
- (id)borderRightStyle;
- (id)borderRightWidth;
- (id)borderSpacing;
- (id)borderStyle;
- (id)borderTop;
- (id)borderTopColor;
- (id)borderTopStyle;
- (id)borderTopWidth;
- (id)borderWidth;
- (id)bottom;
- (id)captionSide;
- (id)clear;
- (id)clip;
- (id)color;
- (id)content;
- (id)counterIncrement;
- (id)counterReset;
- (id)cssFloat;
- (id)cue;
- (id)cueAfter;
- (id)cueBefore;
- (id)cursor;
- (void)dealloc;
- (id)direction;
- (id)display;
- (id)elevation;
- (id)emptyCells;
- (void)finalize;
- (id)font;
- (id)fontFamily;
- (id)fontSize;
- (id)fontSizeAdjust;
- (id)fontStretch;
- (id)fontStyle;
- (id)fontVariant;
- (id)fontWeight;
- (id)getPropertyCSSValue:(id)arg1;
- (id)getPropertyPriority:(id)arg1;
- (id)getPropertyShorthand:(id)arg1;
- (id)getPropertyValue:(id)arg1;
- (id)height;
- (BOOL)isPropertyImplicit:(id)arg1;
- (id)item:(unsigned int)arg1;
- (id)left;
- (id)letterSpacing;
- (id)lineHeight;
- (id)listStyle;
- (id)listStyleImage;
- (id)listStylePosition;
- (id)listStyleType;
- (id)margin;
- (id)marginBottom;
- (id)marginLeft;
- (id)marginRight;
- (id)marginTop;
- (id)markerOffset;
- (id)marks;
- (id)maxHeight;
- (id)maxWidth;
- (id)minHeight;
- (id)minWidth;
- (id)orphans;
- (id)outline;
- (id)outlineColor;
- (id)outlineStyle;
- (id)outlineWidth;
- (id)overflow;
- (id)padding;
- (id)paddingBottom;
- (id)paddingLeft;
- (id)paddingRight;
- (id)paddingTop;
- (id)page;
- (id)pageBreakAfter;
- (id)pageBreakBefore;
- (id)pageBreakInside;
- (id)pause;
- (id)pauseAfter;
- (id)pauseBefore;
- (id)pitch;
- (id)pitchRange;
- (id)playDuring;
- (id)position;
- (id)quotes;
- (id)removeProperty:(id)arg1;
- (id)richness;
- (id)right;
- (void)setAzimuth:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setBackgroundAttachment:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundPosition:(id)arg1;
- (void)setBackgroundRepeat:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setBorderBottom:(id)arg1;
- (void)setBorderBottomColor:(id)arg1;
- (void)setBorderBottomStyle:(id)arg1;
- (void)setBorderBottomWidth:(id)arg1;
- (void)setBorderCollapse:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderLeft:(id)arg1;
- (void)setBorderLeftColor:(id)arg1;
- (void)setBorderLeftStyle:(id)arg1;
- (void)setBorderLeftWidth:(id)arg1;
- (void)setBorderRight:(id)arg1;
- (void)setBorderRightColor:(id)arg1;
- (void)setBorderRightStyle:(id)arg1;
- (void)setBorderRightWidth:(id)arg1;
- (void)setBorderSpacing:(id)arg1;
- (void)setBorderStyle:(id)arg1;
- (void)setBorderTop:(id)arg1;
- (void)setBorderTopColor:(id)arg1;
- (void)setBorderTopStyle:(id)arg1;
- (void)setBorderTopWidth:(id)arg1;
- (void)setBorderWidth:(id)arg1;
- (void)setBottom:(id)arg1;
- (void)setCaptionSide:(id)arg1;
- (void)setClear:(id)arg1;
- (void)setClip:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setCounterIncrement:(id)arg1;
- (void)setCounterReset:(id)arg1;
- (void)setCssFloat:(id)arg1;
- (void)setCue:(id)arg1;
- (void)setCueAfter:(id)arg1;
- (void)setCueBefore:(id)arg1;
- (void)setCursor:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setElevation:(id)arg1;
- (void)setEmptyCells:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontFamily:(id)arg1;
- (void)setFontSize:(id)arg1;
- (void)setFontSizeAdjust:(id)arg1;
- (void)setFontStretch:(id)arg1;
- (void)setFontStyle:(id)arg1;
- (void)setFontVariant:(id)arg1;
- (void)setFontWeight:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setLeft:(id)arg1;
- (void)setLetterSpacing:(id)arg1;
- (void)setLineHeight:(id)arg1;
- (void)setListStyle:(id)arg1;
- (void)setListStyleImage:(id)arg1;
- (void)setListStylePosition:(id)arg1;
- (void)setListStyleType:(id)arg1;
- (void)setMargin:(id)arg1;
- (void)setMarginBottom:(id)arg1;
- (void)setMarginLeft:(id)arg1;
- (void)setMarginRight:(id)arg1;
- (void)setMarginTop:(id)arg1;
- (void)setMarkerOffset:(id)arg1;
- (void)setMarks:(id)arg1;
- (void)setMaxHeight:(id)arg1;
- (void)setMaxWidth:(id)arg1;
- (void)setMinHeight:(id)arg1;
- (void)setMinWidth:(id)arg1;
- (void)setOrphans:(id)arg1;
- (void)setOutline:(id)arg1;
- (void)setOutlineColor:(id)arg1;
- (void)setOutlineStyle:(id)arg1;
- (void)setOutlineWidth:(id)arg1;
- (void)setOverflow:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setPaddingBottom:(id)arg1;
- (void)setPaddingLeft:(id)arg1;
- (void)setPaddingRight:(id)arg1;
- (void)setPaddingTop:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setPageBreakAfter:(id)arg1;
- (void)setPageBreakBefore:(id)arg1;
- (void)setPageBreakInside:(id)arg1;
- (void)setPause:(id)arg1;
- (void)setPauseAfter:(id)arg1;
- (void)setPauseBefore:(id)arg1;
- (void)setPitch:(id)arg1;
- (void)setPitchRange:(id)arg1;
- (void)setPlayDuring:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setProperty:(id)arg1:(id)arg2:(id)arg3;
- (void)setProperty:(id)arg1 value:(id)arg2 priority:(id)arg3;
- (void)setQuotes:(id)arg1;
- (void)setRichness:(id)arg1;
- (void)setRight:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setSpeak:(id)arg1;
- (void)setSpeakHeader:(id)arg1;
- (void)setSpeakNumeral:(id)arg1;
- (void)setSpeakPunctuation:(id)arg1;
- (void)setSpeechRate:(id)arg1;
- (void)setStress:(id)arg1;
- (void)setTableLayout:(id)arg1;
- (void)setTextAlign:(id)arg1;
- (void)setTextDecoration:(id)arg1;
- (void)setTextIndent:(id)arg1;
- (void)setTextShadow:(id)arg1;
- (void)setTextTransform:(id)arg1;
- (void)setTop:(id)arg1;
- (void)setUnicodeBidi:(id)arg1;
- (void)setVerticalAlign:(id)arg1;
- (void)setVisibility:(id)arg1;
- (void)setVoiceFamily:(id)arg1;
- (void)setVolume:(id)arg1;
- (void)setWhiteSpace:(id)arg1;
- (void)setWidows:(id)arg1;
- (void)setWidth:(id)arg1;
- (void)setWordSpacing:(id)arg1;
- (void)setZIndex:(id)arg1;
- (id)size;
- (id)speak;
- (id)speakHeader;
- (id)speakNumeral;
- (id)speakPunctuation;
- (id)speechRate;
- (id)stress;
- (id)tableLayout;
- (id)textAlign;
- (id)textDecoration;
- (id)textIndent;
- (id)textShadow;
- (id)textTransform;
- (id)top;
- (id)unicodeBidi;
- (id)verticalAlign;
- (id)visibility;
- (id)voiceFamily;
- (id)volume;
- (id)whiteSpace;
- (id)widows;
- (id)width;
- (id)wordSpacing;
- (id)zIndex;

@end

