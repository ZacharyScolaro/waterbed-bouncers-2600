#ifndef SPRITES_H
#define SPRITES_H
#include <stdint.h>

extern const uint8_t ScoreSpritesGraphics[14*13];

extern const uint8_t FanBladeGraphics[7][14];

extern const uint8_t FanBladeColu[7];

extern const uint8_t MonkeyWalkingGraphics[2][12];

extern const uint8_t MonkeyWalkingColu[12];

extern const uint8_t MonkeyIdleGraphics[12];

extern const uint8_t MonkeyIdleColu[12];

extern const uint8_t FanChasisGraphics[28];

extern const uint8_t FanChasisColu[28];

extern const uint8_t BonusBananaGraphics[13];

extern const uint8_t BonusBananaColu[13];

extern const uint8_t HeadBoardWideGraphics[200];

extern const uint8_t HeadBoardWideColu[40];

extern const uint8_t SineTables[32][80];

extern const uint8_t kernel_7800[549];


typedef struct {
	const int8_t goto_index;
	const uint8_t pattern_index;
} sequence_t;
typedef struct {
	const sequence_t* sequenced_patterns;
} channel_t;
typedef struct {
	const uint8_t even_speed;
	const uint8_t odd_speed;
	const uint8_t* notes;
} pattern_t;
typedef struct {
const int8_t* frequencies;
const uint8_t* volumes;
const uint8_t sustainStart;
const uint8_t releaseStart;
const uint8_t waveform;
const uint8_t length;
} instrument_t;
typedef struct {
const uint8_t* frequencies;
const uint8_t* volumes;
const uint8_t* waveforms;
const uint8_t length;
} percussion_t;
typedef struct {
	const channel_t channels[2];
	const instrument_t* instruments;
	const percussion_t* percussions;
	const pattern_t* patterns;
} track_t;

extern const track_t SongMiniBlast;
extern const track_t SfxBounce;

#endif // SPRITES_H