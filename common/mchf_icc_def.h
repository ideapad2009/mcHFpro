/************************************************************************************
**                                                                                 **
**                             mcHF Pro QRP Transceiver                            **
**                         Krassi Atanassov - M0NKA 2012-2020                      **
**                            mail: djchrismarc@gmail.com                          **
**                                 twitter: @bph_co                                **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:      M7 <-> M4 Inter core communication 				           **
**  Last Modified:                                                                 **
**  Licence:                                                                       **
**          The mcHF project is released for radio amateurs experimentation,       **
**          non-commercial use only. All source files under GPL-3.0, unless        **
**          third party drivers specifies otherwise. Thank you!                    **
************************************************************************************/

#ifndef __MCHF_ICC_DEF_H
#define __MCHF_ICC_DEF_H

// -------------------------------------------------------------------

#define ICC_BROADCAST					0
#define ICC_START_I2S_PROC				1
#define ICC_TOGGLE_LED					2
#define ICC_GET_FW_VERSION				3
#define ICC_SET_TRX_STATE				4

// -------------------------------------------------------------------

#define TRX_MODE_RX					0
#define TRX_MODE_TX					1

#define DEMOD_USB					0
#define DEMOD_LSB					1
#define DEMOD_CW					2
#define DEMOD_AM					3
#define DEMOD_DIGI					4
#define DEMOD_MAX_MODE				4

// Transverter oscillator adds shift
#define		TRANSVT_FREQ_A	 		42000000

//
#define		MIN_FREQ_CAL			-9999		// Minimum and maximum range of frequency calibration in Hz (referenced to 14.000 MHz)
#define		MAX_FREQ_CAL			9999
//
// Total bands supported
//
#define	MIN_BANDS					0		// lowest band number
#define	MAX_BANDS					9		// Highest band number:  9 = General coverage (RX only) band

#define	KHZ_MULT					4000	// multiplier to convert oscillator frequency or band size to display kHz, used below
//
// Bands definition
// - ID
// - SI570 startup freq
// - size in Hz
//
#define	BAND_MODE_80				0
#define	BAND_FREQ_80				3500*KHZ_MULT		// 3500 kHz
#define	BAND_SIZE_80				500*KHZ_MULT		// 500 kHz in size (Region 2)
//
#define	BAND_MODE_60				1
#define	BAND_FREQ_60				5258*KHZ_MULT		// 5258 kHz
#define	BAND_SIZE_60				150*KHZ_MULT		// 150 kHz in size to allow different allocations
//
#define	BAND_MODE_40				2
#define	BAND_FREQ_40				7000*KHZ_MULT		// 7000 kHz
#define	BAND_SIZE_40				300*KHZ_MULT		// 300 kHz in size (Region 2)
//
#define	BAND_MODE_30				3
#define	BAND_FREQ_30				10100*KHZ_MULT		// 10100 kHz
#define	BAND_SIZE_30				50*KHZ_MULT			// 50 kHz in size
//
#define	BAND_MODE_20				4
#define	BAND_FREQ_20				14000*KHZ_MULT		// 14000 kHz
#define	BAND_SIZE_20				350*KHZ_MULT		// 350 kHz in size
//
#define	BAND_MODE_17				5
#define	BAND_FREQ_17				18068*KHZ_MULT		// 18068 kHz
#define	BAND_SIZE_17				100*KHZ_MULT		// 100 kHz in size
//
#define	BAND_MODE_15				6
#define	BAND_FREQ_15				21000*KHZ_MULT		// 21000 kHz
#define	BAND_SIZE_15				450*KHZ_MULT		// 450 kHz in size
//
#define	BAND_MODE_12				7
#define	BAND_FREQ_12				24890*KHZ_MULT		// 24890 kHz
#define	BAND_SIZE_12				100*KHZ_MULT		// 100 kHz in size
//
#define	BAND_MODE_10				8
#define	BAND_FREQ_10				28000*KHZ_MULT		// 28000 kHz
#define	BAND_SIZE_10				1700*KHZ_MULT		// 1700 kHz in size
//
#define	BAND_MODE_GEN				9					// General Coverage
#define	BAND_FREQ_GEN				10000*KHZ_MULT		// 10000 kHz
#define	BAND_SIZE_GEN				1*KHZ_MULT			// Dummy variable

//
// Audio filter select enumeration
//
enum	{
	AUDIO_300HZ = 0,
	AUDIO_500HZ,
	AUDIO_1P8KHZ,
	AUDIO_2P3KHZ,
	AUDIO_3P6KHZ,
	AUDIO_WIDE
};
//
//
#define	AUDIO_DEFAULT_FILTER		AUDIO_2P3KHZ


// use below to define the lowest-used filter number
//
#define AUDIO_MIN_FILTER			0
//
// use below to define the highest-used filter number-1
//
#define AUDIO_MAX_FILTER			6
//
//
#define MIN_FILTER_SELECT_VAL		1		// Minimum value for selection of sub-filter
//
#define	MAX_300HZ_FILTER			9		// Highest number selection of 500 Hz filter
#define	FILTER_300HZ_DEFAULT		6		// Center frequency of 750 Hz
//
#define	MAX_500HZ_FILTER			5
#define	FILTER_500HZ_DEFAULT		3		// Center frequency of 750 Hz
//
#define	MAX_1K8_FILTER				5
#define	FILTER_1K8_DEFAULT			3		// Center frequency of 1425 Hz
//
#define	MAX_2K3_FILTER				4
#define	FILTER_2K3_DEFAULT			2		// Center frequency of 1412 Hz
//
#define	FILTER_3K6_DEFAULT			1		// 1 = Enabled
#define	MAX_3K6_FILTER				1		// only on/off
//
enum	{
	WIDE_FILTER_10K_AM = 0,
	WIDE_FILTER_7K5_AM,
	WIDE_FILTER_6K_AM,
	WIDE_FILTER_5K_AM,
	WIDE_FILTER_10K,
	WIDE_FILTER_7K5,
	WIDE_FILTER_6K,
	WIDE_FILTER_5K,
	WIDE_FILTER_MAX
};
//
//
#define	FILTER_WIDE_DEFAULT			WIDE_FILTER_10K		// 10k selected by default
//
//
// Define visual widths of audio filters for on-screen indicator in Hz
//
#define	FILTER_300HZ_WIDTH			300
#define	FILTER_500HZ_WIDTH			500
#define	FILTER_1800HZ_WIDTH			1800
#define FILTER_2300HZ_WIDTH			2300
#define FILTER_3600HZ_WIDTH			3600
#define	FILTER_5000HZ_WIDTH			5000
#define	FILTER_6000HZ_WIDTH			6000
#define FILTER_7500HZ_WIDTH			7500
#define	FILTER_10000HZ_WIDTH		10000
//
#define	FILT300_1	500
#define	FILT300_2	550
#define	FILT300_3	600
#define	FILT300_4	650
#define	FILT300_5	700
#define	FILT300_6	750
#define	FILT300_7	800
#define	FILT300_8	850
#define	FILT300_9	900
//
#define	FILT500_1	550
#define	FILT500_2	650
#define	FILT500_3	750
#define	FILT500_4	850
#define	FILT500_5	950
//
#define	FILT1800_1	1125
#define	FILT1800_2	1275
#define	FILT1800_3	1427
#define	FILT1800_4	1575
#define	FILT1800_5	1725
//
#define	FILT2300_1	1262
#define	FILT2300_2	1412
#define	FILT2300_3	1562
#define	FILT2300_4	1712
//
#define	FILT3600	1800
//
#define	FILT5000	2500
//
#define	FILT6000	3000
//
#define	FILT7500	3750
//
#define	FILT10000	5000
//
#define	FILT_DISPLAY_WIDTH	256		// width, in pixels, of the spectral display on the screen - this value used to calculate Hz/pixel for indicating width of filter
//


// Transceiver state public structure
typedef struct TransceiverState
{
	// Sampling rate public flag
	ulong 	samp_rate;

	// Virtual pots public values
	short  	rit_value;
	uchar 	audio_gain;
	uchar 	audio_gain_req;
	float	audio_gain_active;	// working variable for processing audio gain - used in rx audio function
	uchar	audio_max_volume;	// limit for maximum audio gain
	uchar   audio_gain_change;	// change detect for audio gain
	int 	rf_gain;			// RF gain control
	uchar	rf_codec_gain;		// gain for codec (A/D converter) in receive mode
	uchar 	nb_setting;
	uchar	st_gain;
	uchar	pa_bias;
	uchar	pa_cw_bias;

	// flag to show delayed request for unmute afte TX->RX change (remove clicks)
	uchar	audio_unmute;
	bool	buffer_clear;

	int  	tx_iq_lsb_gain_balance;		// setting for TX IQ gain balance
	int  	tx_iq_usb_gain_balance;		// setting for TX IQ gain balance
	//
	int		tx_iq_lsb_phase_balance;	// setting for TX IQ phase balance
	int		tx_iq_usb_phase_balance;	// setting for TX IQ phase balance

	float	tx_adj_gain_var_i;		// active variables for adjusting tx gain balance
	float	tx_adj_gain_var_q;

	int		rx_iq_lsb_gain_balance;		// setting for RX IQ gain balance
	int		rx_iq_usb_gain_balance;		// setting for RX IQ gain balance
	//
	int		rx_iq_am_gain_balance;		// setting for RX IQ gain balance
	//
	int		rx_iq_lsb_phase_balance;	// setting for RX IQ phase balance
	int		rx_iq_usb_phase_balance;	// setting for RX IQ phase balance

	float	rx_adj_gain_var_i;		// active variables for adjusting rx gain balance
	float	rx_adj_gain_var_q;
	//
	// Equalisation factor
	float	tx_power_factor;

	int	freq_cal;				// frequency calibration

	// Frequency synthesizer
	ulong	tune_freq;			// main synthesizer frequency
	ulong	tune_freq_old;		// used to detect change of main synthesizer frequency

	// Transceiver calibration mode flag
	//uchar	calib_mode;

	// Transceiver menu mode variables
	uchar	menu_mode;		// TRUE if in menu mode
	uchar	menu_item;		// Used to indicate specific menu item
	int		menu_var;		// Used to change specific menu item
	bool	menu_var_changed;	// TRUE if something changed in a menu and that an EEPROM save should be done!

	// Ham band public flag
	// index of bands table in Flash
	uchar 	band;
	#ifdef DSP_MODE
	uchar 	api_band;
	#endif
	bool	band_change;
	uchar	filter_band;		// filter selection band:  1= 80, 2= 60/40, 3=30/20, 4=17/15/12/10 - used for selection of power detector coefficient selection.
	//
	// Receive/Transmit public flag
	uchar 	txrx_mode;

	// Show what type of API request
	uchar	api_iamb_type;

	// TX/RX IRQ lock, to prevent reentrance
	//uchar	txrx_lock;
	uchar	ptt_req;

	// Unattended TX public flag
	//uchar 	auto_mode;

	// Demodulator mode public flag
	uchar 	dmod_mode;

	// Digital mode public flag
	//uchar 	digi_mode;

	// FIR encoder current mode
	//uchar 	fir_enc_mode;

	// Gain encoder current mode
	//uchar 	gain_enc_mode;			// old var, to be removed
	uchar 	enc_one_mode;
	uchar 	enc_two_mode;
	uchar 	enc_thr_mode;

	uchar	tx_meter_mode;				// meter mode

	// Audio filter ID
	uchar	filter_id;
	uchar	api_filter_id;
	//
	uchar	filter_300Hz_select;
	uchar	filter_500Hz_select;
	uchar	filter_1k8_select;
	uchar	filter_2k3_select;
	uchar	filter_3k6_select;
	uchar	filter_wide_select;
	//
	uchar	filter_cw_wide_disable;		// TRUE if wide filters are disabled in CW mode
	uchar	filter_ssb_narrow_disable;	// TRUE if narrow filters are disabled in SSB modes
	//
	uchar	am_mode_disable;			// TRUE if AM mode is to be disabled

	// AGC mode
	uchar	agc_mode;
	uchar	agc_custom_decay;

	uchar	max_rf_gain;

	// Eth to UI driver requests flag
	uchar	LcdRefreshReq;

	// Eth to UI public flag
	uchar	new_band;
	uchar	new_mode;
	uchar	new_digi_mode;

	// Current CW mode
	uchar	keyer_mode;
	uchar	keyer_speed;
	ulong	sidetone_freq;
	uchar	paddle_reverse;
	uchar	cw_rx_delay;
	ulong	unmute_delay_count;

	uchar	power_level;

	uchar 	tx_audio_source;
	uchar	tx_mic_gain;
	ulong	tx_mic_gain_mult;
	ulong	tx_mic_gain_mult_temp;	// used to temporarily hold the mic gain when going from RX to TX
	uchar	tx_line_gain;
	uchar	tx_comp_level;			// Used to hold compression level which is used to calculate other values for compression.  0 = manual.

	// Microphone gain boost of +20dB via Codec command (TX)
	uchar	mic_boost;

	// Global tuning flag - in every demod mode
	uchar 	tune;

	ushort ee_init_stat;

	uchar	powering_down;

	// Spectrum Scope config - placed here since "sd." not defined at time of init

	uchar	scope_speed;	// update rate for spectrum scope

	uchar	scope_filter;	// strength of filter in spectrum scope

	uchar	scope_trace_colour;	// color of spectrum scope trace;
	uchar	scope_grid_colour;	// saved color of spectrum scope grid;
	ulong	scope_grid_colour_active;	// active color of spectrum scope grid;
	uchar	scope_centre_grid_colour;	// color of center line of scope grid
	ushort	scope_centre_grid_colour_active;	// active colour of the spectrum scope center grid line
	uchar	scope_scale_colour;	// color of spectrum scope frequency scale
	uchar	scope_rescale_rate;	// rescale rate on the 'scope
	uchar	scope_agc_rate;		// agc rate on the 'scope
	uchar	spectrum_db_scale;	// db/Division scale setting on spectrum scope
	uchar	waterfall_speed;	// speed of update of the waterfall
	//
	bool	radio_config_menu_enable;	// TRUE if radio configuration menu is to be visible
	//
	bool	cat_mode_active;	// TRUE if CAT mode is on
	//
	uchar	xverter_mode;		// TRUE if transverter mode active
	ulong	xverter_offset;		// frequency offset for transverter (added to frequency display)

	bool	refresh_freq_disp;		// TRUE if frequency display display is to be refreshed
	//
	// Calibration factors for output power, in percent (100 = 1.00)
	//
	uchar	pwr_80m_5w_adj;			// calibration adjust for 80 meters, 5 watts
	uchar	pwr_60m_5w_adj;			// calibration adjust for 60 meters, 5 watts
	uchar	pwr_40m_5w_adj;			// calibration adjust for 40 meters, 5 watts
	uchar	pwr_30m_5w_adj;			// calibration adjust for 30 meters, 5 watts
	uchar	pwr_20m_5w_adj;			// calibration adjust for 20 meters, 5 watts
	uchar	pwr_17m_5w_adj;			// calibration adjust for 17 meters, 5 watts
	uchar	pwr_15m_5w_adj;			// calibration adjust for 15 meters, 5 watts
	uchar	pwr_12m_5w_adj;			// calibration adjust for 12 meters, 5 watts
	uchar	pwr_10m_5w_adj;			// calibration adjust for 10 meters, 5 watts
	//
	uchar	pwr_80m_full_adj;			// calibration adjust for 80 meters, full power
	uchar	pwr_60m_full_adj;			// calibration adjust for 60 meters, full power
	uchar	pwr_40m_full_adj;			// calibration adjust for 40 meters, full power
	uchar	pwr_30m_full_adj;			// calibration adjust for 30 meters, full power
	uchar	pwr_20m_full_adj;			// calibration adjust for 20 meters, full power
	uchar	pwr_17m_full_adj;			// calibration adjust for 17 meters, full power
	uchar	pwr_15m_full_adj;			// calibration adjust for 15 meters, full power
	uchar	pwr_12m_full_adj;			// calibration adjust for 12 meters, full power
	uchar	pwr_10m_full_adj;			// calibration adjust for 10 meters, full power
	//
	ulong	alc_decay;					// adjustable ALC release time - EEPROM read/write version
	ulong	alc_decay_var;				// adjustable ALC release time - working variable version
	ulong	alc_tx_postfilt_gain;		// amount of gain after the TX audio filtering - EEPROM read/write version
	ulong	alc_tx_postfilt_gain_var;	// amount of gain after the TX audio filtering - working variable version
	//
	uchar	freq_step_config;			// configuration of step size (line, step button reversal)
	//
	bool	nb_disable;					// TRUE if noise blanker is to be disabled
	//
	uchar	dsp_active;					// Used to hold various aspects of DSP mode selection
										// LSB = 1 if DSP NR mode is on (| 1)
										// LSB+1 = 1 if DSP NR is to occur post AGC (| 2)
										// LSB+2 = 1 if DSP Notch mode is on (| 4)
										// LSB+3 = 0 if DSP is to be displayed on screen instead of NB (| 8)
										// MSB	 = 1 if button G2 toggle NOT initialized (| 128)
	uchar	dsp_active_toggle;			// holder used on the press-hold of button G2 to "remember" the previous setting
	uchar	dsp_nr_strength;			// "Strength" of DSP Noise reduction - to be converted to "Mu" factor
	ulong	dsp_nr_delaybuf_len;		// size of DSP noise reduction delay buffer
	uchar	dsp_nr_numtaps;				// Number of FFT taps on the DSP Noise reduction
	uchar	dsp_notch_numtaps;
	uchar	dsp_notch_mu;				// mu adjust of notch DSP LMS
	ulong	dsp_notch_delaybuf_len;		// size of DSP notch delay buffer
	bool	dsp_inhibit;				// if TRUE, DSP (NR, Notch) functions are inhibited.  Used during power-up
	bool	dsp_inhibit_mute;			// holder for "dsp_inhibit" during muting operations to allow restoration of previous state
	bool	dsp_timed_mute;				// TRUE if DSP is to be muted for a timed amount
	ulong	dsp_inhibit_timing;			// used to time inhibiting of DSP when it must be turned off for some reason
	bool	reset_dsp_nr;				// TRUE if DSP NR coefficients are to be reset when "audio_driver_set_rx_audio_filter()" is called
	//
	uchar	lcd_backlight_brightness;	// LCD backlight brightness, 0-3:  0 = full, 3 = dimmest
	uchar	lcd_backlight_blanking;		// for controlling backlight auto-off control
	//
	uchar	tune_step;					// Used for press-and-hold tune step adjustment
	ulong	tune_step_idx_holder;		// used to hold the original step size index during the press-and-hold
	//
	bool	frequency_lock;				// TRUE if frequency knob is locked
	//
	uchar	tx_disable;					// TRUE if transmit is to be disabled
	//
	uchar	misc_flags1;				// Used to hold individual status flags, stored in EEPROM location "EEPROM_MISC_FLAGS1"
										// LSB = 0 if on-screen AFG/(STG/CMP) and WPM/(MIC/LIN) indicators are changed on TX
										// LSB+1 = 1 if BAND-/BAND+ buttons are to be swapped in their positions
										// LSB+2 = 1 if TX audio output from LINE OUT is to be muted during transmit (audio output only enabled
											//	when translate mode is DISABLED
										// LSB+3 = 1 if AM TX has transmit filter DISABLED
										// LSB+4 = 1 if FWD/REV A/D inputs from RF power detectors are to be reversed
										// LSB+5 = 1 if Frequency tuning is to be relaxed
										// LSB+6 = 1 if SSB TX has transmit filter DISABLED
										// LSB+7 = 0 = Spectrum Scope (analyzer), 1 = Waterfall display
	uchar	misc_flags2;				// Used to hold individual status flags, stored in EEPROM location "EEPROM_MISC_FLAGS2"
										// LSB = 0:  Display filter bandwidth on screen;  1 = Do not display filter bandwidth
	ulong	sysclock;					// This counts up from zero when the unit is powered up at precisely 100 Hz over the long term.  This
										// is NEVER reset and is used for timing certain events.
	ushort	version_number_build;	// version number - build - used to hold version number and detect change
	ushort	version_number_release;	// version number - release - used to hold version number and detect change
	uchar	nb_agc_time_const;			// used to calculate the AGC time constant
	uchar	cw_offset_mode;				// CW offset mode (USB, LSB, etc.)
	bool	cw_lsb;						// flag used to indicate that CW is to operate in LSB when TRUE
	uchar	iq_freq_mode;				// used to set/configure the I/Q frequency/conversion mode
	uchar	lsb_usb_auto_select;		// holds setting of LSB/USB auto-select above/below 10 MHz
	bool	conv_sine_flag;				// FALSE until the sine tables for the frequency conversion have been built (normally zero, force 0 to rebuild)
	ulong	hold_off_spectrum_scope;	// this is a timer used to hold off updates of the spectrum scope when an SPI LCD display interface is used
	ulong	lcd_blanking_time;			// this holds the system time after which the LCD is blanked - if blanking is enabled
	bool	lcd_blanking_flag;			// if TRUE, the LCD is blanked completely (e.g. backlight is off)
	bool	freq_cal_adjust_flag;		// set TRUE if frequency calibration is in process
	bool	xvtr_adjust_flag;			// set TRUE if transverter offset adjustment is in process
	bool	rx_muting;					// set TRUE if audio output is to be muted
	ulong	rx_blanking_time;			// this is a timer used to delay the un-blanking of the audio after a large synthesizer tuning step
	ulong	vfo_mem_mode;				// this is used to record the VFO/memory mode (0 = VFO "A" = backwards compatibility)
										// LSB+6 (0x40):  0 = VFO A, 1 = VFO B
										// LSB+7 (0x80): 0 = normal mode, 1 = Split mode (e.g. LSB=0:  RX=A, TX=B;  LSB=1:  RX=B, TX=A)
	ulong	voltmeter_calibrate;		// used to calibrate the voltmeter
	bool	thread_timer;				// used to trigger the thread timing (e.g. "driver_thread()")
	uchar	waterfall_color_scheme;		// stores waterfall color scheme
	uchar	waterfall_vert_step_size;	// vertical step size in waterfall mode
	ulong	waterfall_offset;			// offset for waterfall display
	ulong	waterfall_contrast;			// contrast setting for waterfall display
	uchar	spectrum_scope_scheduler;	// timer for scheduling the next update of the spectrum scope update, updated at DMA rate
	uchar	spectrum_scope_nosig_adjust;	// Adjustment for no signal adjustment conditions for spectrum scope
	uchar	waterfall_nosig_adjust;		// Adjustment for no signal adjustment conditions for waterfall
	uchar	waterfall_size;				// size of waterfall display (and other parameters) - size setting is in lower nybble, upper nybble/byte reserved
	uchar	fft_window_type;			// type of windowing function applied to scope/waterfall.  At the moment, only lower 4 bits are used - upper 4 bits are reserved
	bool	dvmode;						// TRUE if alternate (stripped-down) RX and TX functions (USB-only) are to be used
	uchar	tx_audio_muting_timing;		// timing value used for muting TX audio when keying PTT to suppress "click" or "thump"
	ulong	tx_audio_muting_timer;		// timer value used for muting TX audio when keying PTT to suppress "click" or "thump"
	uchar	filter_disp_colour;			// used to hold the current color of the line that indicates the filter passband/bandwidth
	bool	tx_audio_muting_flag;		// when TRUE, audio is to be muted after PTT/keyup
	bool	vfo_mem_flag;				// when TRUE, memory mode is enabled
	bool	mem_disp;					// when TRUE, memory display is enabled

} TransceiverState;

#endif
