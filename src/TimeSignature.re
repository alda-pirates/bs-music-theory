type t = {
  beats: int,
  noteValue: NoteValueType.t,
};

let makeWithBeatsAndDivision = (beats, division) => {
  let noteValue = NoteValueType.make(`FloatLiteral(division));
  switch (noteValue) {
  | Some(noteValue) => Some({beats, noteValue})
  | None => None
  };
};

let make =
  fun
  | `BeatsAndDivision(b, d) => makeWithBeatsAndDivision(b, d);

let default = { beats: 4, noteValue: Quarter }

let description = ts =>
  ts.beats->string_of_int
  ++ "/"
  ++ ts.noteValue->NoteValueType.rawValue->string_of_float;


